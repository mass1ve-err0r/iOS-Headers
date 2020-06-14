//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, PUAssetReference;

__attribute__((visibility("hidden")))
@interface PUAssetDisplayDescriptor : NSObject
{
    PUAssetReference *_assetReference;
    NSDate *_modifiedAfterDate;
    CDStruct_1b6d18a9 _videoSeekTime;
}

+ (id)assetDisplayDescriptorForSimpleNavigationToAssetReference:(id)arg1;
@property(readonly, nonatomic) NSDate *modifiedAfterDate; // @synthesize modifiedAfterDate=_modifiedAfterDate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 videoSeekTime; // @synthesize videoSeekTime=_videoSeekTime;
@property(readonly, nonatomic) PUAssetReference *assetReference; // @synthesize assetReference=_assetReference;
- (void).cxx_destruct;
- (id)initWithAssetReference:(id)arg1 modifiedAfterDate:(id)arg2 videoSeekTime:(CDStruct_1b6d18a9)arg3;
- (id)init;

@end

