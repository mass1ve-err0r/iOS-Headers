//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFPreference.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class HMFSystemPreference, NSArray, NSString;

@interface HMDAirPlay2Preference : HMFPreference <HMFObject>
{
    HMFSystemPreference *_airPlayPreference;
    HMFSystemPreference *_homeKitPreference;
}

+ (void)load;
@property(readonly) HMFSystemPreference *homeKitPreference; // @synthesize homeKitPreference=_homeKitPreference;
@property(readonly) HMFSystemPreference *airPlayPreference; // @synthesize airPlayPreference=_airPlayPreference;
- (void).cxx_destruct;
- (id)stringValue;
- (id)numberValue;
- (_Bool)boolValue;
@property(readonly, copy) NSString *propertyDescription;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3;

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

