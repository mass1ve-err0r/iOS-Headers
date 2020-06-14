//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSURL;

@interface AMSURLAction : NSObject
{
    long long _actionType;
    NSError *_error;
    NSURL *_redirectURL;
}

+ (id)actionWithError:(id)arg1;
+ (id)redirectActionWithURL:(id)arg1;
+ (id)retryAction;
@property(retain, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(long long)arg1;

@end

