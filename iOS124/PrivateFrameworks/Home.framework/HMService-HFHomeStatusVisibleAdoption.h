//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMService.h>

#import <Home/HFHomeStatusVisible-Protocol.h>

@class NSString;

@interface HMService (HFHomeStatusVisibleAdoption) <HFHomeStatusVisible>
- (id)hf_updateIsVisibleInHomeStatus:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hf_hasSetVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_isVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_supportsHomeStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

