//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

@interface ODRDatabase : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
}

+ (id)database;
- (void).cxx_destruct;
- (_Bool)_performTransactionWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)_accessDatabaseUsingBlock:(CDUnknownBlockType)arg1;
- (void)readUsingSessionBlock:(CDUnknownBlockType)arg1;
- (_Bool)modifyUsingTransactionBlock:(CDUnknownBlockType)arg1;
- (id)init;

@end

