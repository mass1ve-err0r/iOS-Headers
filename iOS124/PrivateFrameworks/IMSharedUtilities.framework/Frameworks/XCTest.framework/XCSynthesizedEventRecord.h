//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface XCSynthesizedEventRecord : NSObject <NSSecureCoding>
{
    NSMutableArray *_eventPaths;
    NSString *_name;
    long long _interfaceOrientation;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
@property(readonly) double maximumOffset;
- (void)addPointerEventPath:(id)arg1;
@property(readonly) NSArray *eventPaths;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (void)unsetInterfaceOrientation;
- (id)initWithName:(id)arg1 interfaceOrientation:(long long)arg2;
- (_Bool)synthesizeWithError:(id *)arg1;

@end

