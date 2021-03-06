//
//  AppDelegate.h
//  HotelReservations
//
//  Created by Bradley Johnson on 12/20/14.
//  Copyright (c) 2014 BPJ. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "CoreDataStack.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (readonly, strong, nonatomic) CoreDataStack *coreDataStack;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

