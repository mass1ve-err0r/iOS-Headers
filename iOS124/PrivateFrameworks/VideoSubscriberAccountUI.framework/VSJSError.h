//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <VideoSubscriberAccountUI/VSJSError-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VSJSError : IKJSObject <VSJSError>
{
    unsigned long long _code;
    NSString *_message;
}

@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) unsigned long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)error;
- (id)description;
- (id)init;

@end

