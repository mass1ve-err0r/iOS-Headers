//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MNTraceSignificantEventRow : NSObject
{
    double _timestamp;
    NSDictionary *_data;
    long long _eventType;
}

@property(nonatomic) long long eventType; // @synthesize eventType=_eventType;
@property(copy, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)descriptionWithDataFilteredByFilter:(CDUnknownBlockType)arg1;
- (id)description;
- (id)_descriptionWithData:(id)arg1;

@end

