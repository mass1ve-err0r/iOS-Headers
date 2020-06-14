//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface GEOClientRequestInfo : NSObject
{
    NSString *_clientID;
    NSMutableDictionary *_requests;
}

@property(readonly, nonatomic) NSDictionary *requests; // @synthesize requests=_requests;
@property(readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (void).cxx_destruct;
- (void)incrementCountForRequestType:(unsigned char)arg1;
- (unsigned long long)countForRequestType:(unsigned char)arg1;
- (id)initWithClientID:(id)arg1;
- (id)init;

@end

