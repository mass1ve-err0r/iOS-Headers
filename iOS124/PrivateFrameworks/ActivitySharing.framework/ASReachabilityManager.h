//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASReachabilityStatusCache, NSOperationQueue, NSString;

@interface ASReachabilityManager : NSObject
{
    ASReachabilityStatusCache *_statusCache;
    NSOperationQueue *_queryOperationQueue;
    NSString *_serviceIdentifier;
}

+ (id)sharedInstanceForServiceIdentifier:(id)arg1;
@property(readonly, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void).cxx_destruct;
- (long long)numberOfScheduledQueries;
- (void)queryDestinations:(id)arg1 updateHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_addDestinationsToQuery:(id)arg1 updateHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_initWithServiceIdentifer:(id)arg1;
- (id)init;

@end

