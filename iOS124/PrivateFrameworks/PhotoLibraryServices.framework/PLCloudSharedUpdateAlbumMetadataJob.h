//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@class NSDictionary;

@interface PLCloudSharedUpdateAlbumMetadataJob : PLCloudSharingJob
{
    NSDictionary *_metadata;
}

+ (void)updateAlbumMetadata:(id)arg1;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
- (id)_argumentsDictionaryFromXPCEvent:(id)arg1;
- (id)_argumentsDictionaryAsData:(id)arg1;
- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;
- (id)description;
- (void)dealloc;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;

@end

