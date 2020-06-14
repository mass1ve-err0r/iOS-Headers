//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSDictionary, PHFetchResult;

@interface PXMemoriesDataSourceState : NSObject <NSCopying>
{
    PHFetchResult *_memories;
    NSDictionary *_infosByMemory;
}

@property(readonly, nonatomic) NSDictionary *infosByMemory; // @synthesize infosByMemory=_infosByMemory;
@property(readonly, nonatomic) PHFetchResult *memories; // @synthesize memories=_memories;
- (void).cxx_destruct;
- (id)stateUpdatedWithChange:(id)arg1 outMemoriesChangeDetails:(out id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMemories:(id)arg1 infosByMemory:(id)arg2;

@end

