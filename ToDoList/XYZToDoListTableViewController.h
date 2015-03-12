//
//  XYZToDoListTableViewController.h
//  ToDoList
//
//  Created by Test on 29.04.2014.
//
//

#import <UIKit/UIKit.h>
#import "XYZToDoItem.h"
@interface XYZToDoListTableViewController : UITableViewController
@property XYZToDoItem *toDoItem; 

- (IBAction)unwindToList:(UIStoryboardSegue *)segue;

@end
