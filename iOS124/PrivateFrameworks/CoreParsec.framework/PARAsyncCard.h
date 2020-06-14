//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCard.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSURL;

@interface PARAsyncCard : SFCard <NSSecureCoding>
{
    double _scale;
    unsigned long long _clientQueryId;
}

+ (_Bool)supportsSecureCoding;
+ (id)cardWithTitle:(id)arg1 url:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5 clientQueryId:(unsigned long long)arg6;
+ (id)cardWithTitle:(id)arg1 url:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5;
@property(readonly, nonatomic) unsigned long long clientQueryId; // @synthesize clientQueryId=_clientQueryId;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, copy, nonatomic) NSURL *cardURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

