class Node{
	  constructor(value){
		  this.value=value;
		  this.left=null;
		  this.right=null;
	  }
}
class Tree{
	constructor(){
		this.root=null;
		this.length=0;
	}
	insert(value){
	    var newNode=new Node(value);
		if(!this.root)
			return this;
		var current=this.root;
		while(true){
		    if(current.value > value){
				 if(current.left==null)
				 {current.left=newNode;
				      return this;
				 }
				 current = current.left;
			}
			else{
				if(!current.right)
				{
					current.right=newNode;
					return this;
					
				}
				  current=current.right;
				  
			}
		}
		this.length++;
		return current;
		
	}
	ZigZag(){
		var result=[];
		if(!this.root)
			return;
		function spiralOrder(root,level){
			if(result[level])
				result[level].push(root.value);
			else 
				result[level]=[root.value];
		    spiralOrder(root.left,level+1);
			spiralOrder(root.right,level+1);
			
		}
		var root=this.root;
		var level=0;
		spiralOrder(root,level);
		for(var i=0;i<this.length;i++)
		{
			if(i&1)
			{   var top=0;
				for(var j=result[i].length-1;j>=0;j--)
				{
					result[j][top]=result[i][j];
					top++;
				}
					
			}
		}
		
		showme(result);
	}
	showme(result){
		for(var i=0;i<result.length;i++)
			console.log("%d %d",i+"=>"+result[i]);
		
	}
}
var t=new Tree();
t.insert(10);
t.insert(20);
t.insert(30);
t.insert(3);
t.insert(5);
t.insert(6);
t.insert(8);
t.insert(3);
t.ZigZag();

