//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AMSPromise, NSMutableURLRequest, NSURLRequest;

@protocol AMSRequestEncoding <NSObject>

@optional
- (NSMutableURLRequest *)requestByEncodingRequest:(NSURLRequest *)arg1 parameters:(id)arg2 error:(id *)arg3;
- (AMSPromise *)requestByEncodingRequest:(NSURLRequest *)arg1 parameters:(id)arg2;
@end

