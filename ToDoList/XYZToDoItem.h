//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Test on 03.05.2014.
//
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
