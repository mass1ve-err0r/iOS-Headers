//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol GEOMapServiceTicket, OS_dispatch_queue;

@interface CLGeocoderInternal : NSObject
{
    CDUnknownBlockType _geocodeCompletionHandler;
    id <GEOMapServiceTicket> _ticket;
    NSObject<OS_dispatch_queue> *_queue;
}

@end

