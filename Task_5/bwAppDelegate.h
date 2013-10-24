//
//  bwAppDelegate.h
//  Task_5
//
//  Created by Xiaolong ZHU on 24/10/13.
//  Copyright (c) 2013 Brickworks. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface bwAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;

- (IBAction)saveAction:(id)sender;

@end
