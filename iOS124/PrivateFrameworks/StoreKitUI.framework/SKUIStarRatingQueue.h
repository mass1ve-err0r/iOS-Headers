//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SKUIClientContext, SKUIReviewConfiguration, UIWindow;

@interface SKUIStarRatingQueue : NSObject
{
    SKUIClientContext *_clientContext;
    SKUIReviewConfiguration *_reviewConfiguration;
    UIWindow *_window;
}

@property(nonatomic) __weak UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)_setRating:(long long)arg1 forItemID:(id)arg2 account:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)setRating:(long long)arg1 forItemID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithClientContext:(id)arg1 reviewConfiguration:(id)arg2;
- (id)init;

@end

