//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSPredicate, NSString;

@interface OFLocationCache : NSObject
{
    NSString *_diskCacheFilepath;
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSManagedObjectContext *_parentManagedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSPredicate *_predicateEntryTemplate;
    NSPredicate *_predicateEntryWithLocalRegionTemplate;
}

+ (id)defaultCache;
@property(retain, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D)arg1 andAccuracy:(double)arg2;
- (id)placemarksForLocationCoordinate:(struct CLLocationCoordinate2D)arg1 andAccuracy:(double)arg2 closestResultDistance:(double *)arg3 numberOfResults:(unsigned long long *)arg4;
- (void)setPlacemarks:(id)arg1 forLocationCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)invalidateCacheForLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)invalidateMemoryCaches;
- (void)invalidateDiskCaches;
- (void)_willTerminateNotification;
- (void)_didEnterBackgroundNotification;
- (_Bool)save;
- (_Bool)_save;
- (void)dealloc;
- (id)initWithDiskCacheFilepath:(id)arg1;
- (id)init;

@end

