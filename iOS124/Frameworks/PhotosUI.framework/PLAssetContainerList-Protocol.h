//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>
#import <PhotosUI/PLDiagnosticsProvider-Protocol.h>

@class NSManagedObjectContext, NSOrderedSet, NSString, PLPhotoLibrary;

@protocol PLAssetContainerList <NSObject, PLDiagnosticsProvider>
@property(readonly, nonatomic) unsigned long long containersCount;
- (NSString *)containersRelationshipName;
- (PLPhotoLibrary *)photoLibrary;
- (NSManagedObjectContext *)managedObjectContext;
- (_Bool)canEditContainers;
- (_Bool)isEmpty;
- (NSOrderedSet *)containers;
@end

