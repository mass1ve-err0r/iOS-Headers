//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, SGSuggestionsServiceMessagesProtocol;

@interface CKSuggestionsProxy : NSObject
{
    NSMutableSet *_chatBlacklist;
    NSMutableDictionary *_callbackBlocks;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<SGSuggestionsServiceMessagesProtocol> *_suggestionsService;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<SGSuggestionsServiceMessagesProtocol> *suggestionsService; // @synthesize suggestionsService=_suggestionsService;
- (void).cxx_destruct;
- (void)bannerViewForSearchables:(id)arg1 guid:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (id)_filteredRealtimeEvents:(id)arg1;
- (void)purgeCache:(id)arg1;
- (id)init;

@end

