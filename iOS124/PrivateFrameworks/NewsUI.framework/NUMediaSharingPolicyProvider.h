//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SXMediaSharingPolicyProvider-Protocol.h>

@class NSString;
@protocol FCHeadlineProviding, FCNewsAppConfigurationManager;

@interface NUMediaSharingPolicyProvider : NSObject <SXMediaSharingPolicyProvider>
{
    id <FCHeadlineProviding> _headline;
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
}

@property(readonly, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
@property(readonly, nonatomic) id <FCHeadlineProviding> headline; // @synthesize headline=_headline;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long mediaSharingPolicy;
- (id)initWithHeadline:(id)arg1 appConfigurationManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

