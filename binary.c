#include <stdio.h>
 #include <stdlib.h>
    struct node

    {

        int info;

        struct node* left, *right;

    };
     

    struct node* createnode(int key)

    {

        struct node* newnode = (struct node*)malloc(sizeof(struct node));

        newnode->info = key;

        newnode->left = NULL;

        newnode->right = NULL;

     

        return(newnode);

    }

     


     

    int heightoftree(struct node* root)

    {

        int max;

     

        if (root!=NULL)

        {

          
            int leftsubtree = heightoftree(root->left); 


            int rightsubtree = heightoftree(root->right);  

            if (leftsubtree > rightsubtree)

            {

                max = leftsubtree + 1;

                return max;

            }

            else

            {

                max = rightsubtree + 1;

                return max;

            }

        }

    }


     

    int main()

    {


     

        struct node *newnode = createnode(25);

        newnode->left = createnode(27);

        newnode->right = createnode(19);

        newnode->left->left = createnode(17);

        newnode->left->right = createnode(91);

        newnode->right->left = createnode(13);

        newnode->right->right = createnode(55);

        printf("Height of the first Tree is\t%d\n",heightoftree(newnode));

  

     

        struct node *node = createnode(1);

        node->right = createnode(2);

        node->right->right = createnode(3);

        node->right->right->right = createnode(4);

        node->right->right->right->right = createnode(5);

     

     

        printf("\nHeight of the second Tree is\t%d\n",heightoftree(node));

     



     

        struct node *root = createnode(15);

     

       

        printf("\nHeight of the third Tree is\t%d",heightoftree(root));
      
        return 0;
    }
/* output:-
Height of the first Tree is 3

Height of the second Tree is    5

Height of the third Tree is 1
*/
