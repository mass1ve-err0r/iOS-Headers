//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

@interface ODRDatabaseSession : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
}

@property(readonly) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
- (void).cxx_destruct;
- (_Bool)validManifestExistsForApplication:(id)arg1 error:(id *)arg2;
- (_Bool)validBundleExistsForApplication:(id)arg1 error:(id *)arg2;
- (long long)preflightApplication:(id)arg1;
- (_Bool)applicationNeedsRepair:(id)arg1 error:(id *)arg2;
- (id)initWithManagedObjectContext:(id)arg1;
- (id)init;

@end

