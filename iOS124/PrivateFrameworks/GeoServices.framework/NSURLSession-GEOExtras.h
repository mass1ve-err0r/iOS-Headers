//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURLSession.h>

@interface NSURLSession (GEOExtras)
+ (id)_geo_sendSynchronousRequest:(id)arg1 requestCounterTicket:(id)arg2 connectionProperties:(id)arg3 returningResponse:(id *)arg4 error:(id *)arg5;
+ (void)_geo_sendAsynchronousRequest:(id)arg1 requestCounterTicket:(id)arg2 queue:(id)arg3 connectionProperties:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)_geo_sendAsynchronousRequest:(id)arg1 requestCounterTicket:(id)arg2 connectionProperties:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
@end

