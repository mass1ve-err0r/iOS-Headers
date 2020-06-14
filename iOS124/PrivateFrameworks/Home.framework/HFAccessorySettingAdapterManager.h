//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol HFMediaProfileContainer;

@interface HFAccessorySettingAdapterManager : NSObject
{
    id <HFMediaProfileContainer> _mediaProfileContainer;
    NSMutableDictionary *_adaptersByID;
}

@property(readonly, nonatomic) NSMutableDictionary *adaptersByID; // @synthesize adaptersByID=_adaptersByID;
@property(readonly, nonatomic) __weak id <HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
- (void).cxx_destruct;
- (id)_createAdapterForIdentifier:(id)arg1;
- (id)adapterForIdentifier:(id)arg1;
- (id)init;
- (id)initWithMediaProfileContainer:(id)arg1;

@end

