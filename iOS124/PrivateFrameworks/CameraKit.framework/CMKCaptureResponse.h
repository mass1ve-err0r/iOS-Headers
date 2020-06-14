//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CMKCaptureRequest, CMKInflightAsset, NSDictionary, NSMutableDictionary;

@interface CMKCaptureResponse : NSObject
{
    _Bool _completed;
    long long _type;
    CMKInflightAsset *_asset;
    NSDictionary *__parameterStorage;
    CMKCaptureRequest *_request;
    NSMutableDictionary *_metadata;
    NSDictionary *_additionalInformation;
    NSDictionary *_diagnostics;
}

@property(copy, nonatomic) NSDictionary *diagnostics; // @synthesize diagnostics=_diagnostics;
@property(copy, nonatomic) NSDictionary *additionalInformation; // @synthesize additionalInformation=_additionalInformation;
@property(retain, nonatomic) NSMutableDictionary *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) CMKCaptureRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) NSDictionary *_parameterStorage; // @synthesize _parameterStorage=__parameterStorage;
@property(retain, nonatomic) CMKInflightAsset *asset; // @synthesize asset=_asset;
@property(nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)releaseCachedImages;
- (id)parameterForKey:(id)arg1;
- (id)initWithType:(long long)arg1;
- (id)init;

@end

