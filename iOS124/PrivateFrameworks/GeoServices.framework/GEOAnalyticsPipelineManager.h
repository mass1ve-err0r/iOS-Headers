//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOAnalyticsPipelineProxy-Protocol.h>

@class NSString;
@protocol GEOAnalyticsPipelineProxy;

@interface GEOAnalyticsPipelineManager : NSObject <GEOAnalyticsPipelineProxy>
{
    id <GEOAnalyticsPipelineProxy> _proxy;
}

+ (id)sharedManager;
+ (void)useProxyClass:(Class)arg1;
- (void).cxx_destruct;
- (void)setShortSessionValues:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)shortSessionValuesWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

