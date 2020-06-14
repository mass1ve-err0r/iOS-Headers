//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOXPCRequest.h>

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class GEOETARequest, NSString;

@interface GEOETARequestSimple : GEOXPCRequest <GEOXPCRequest>
{
    GEOETARequest *_request;
    int _mode;
}

+ (Class)replyClass;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) GEOETARequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (_Bool)expectsReply;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

