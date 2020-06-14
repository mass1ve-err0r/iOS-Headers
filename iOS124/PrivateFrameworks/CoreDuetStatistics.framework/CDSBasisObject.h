//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface CDSBasisObject : NSObject
{
    unsigned long long _localTime;
    NSDate *_creationDate;
    NSString *_basisValueString;
    unsigned long long _basisUint64Value;
    double _basisDoubleValue;
    unsigned long long _attributeId;
    _Bool _risingEdge;
    _Bool _fallingEdge;
    double _duration;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long attributeId; // @synthesize attributeId=_attributeId;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool fallingEdge; // @synthesize fallingEdge=_fallingEdge;
@property(nonatomic) _Bool risingEdge; // @synthesize risingEdge=_risingEdge;
@property(nonatomic) double basisDoubleValue; // @synthesize basisDoubleValue=_basisDoubleValue;
@property(nonatomic) unsigned long long basisUint64Value; // @synthesize basisUint64Value=_basisUint64Value;
@property(retain, nonatomic) NSString *basisValueString; // @synthesize basisValueString=_basisValueString;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) unsigned long long localTime; // @synthesize localTime=_localTime;
- (void).cxx_destruct;
- (id)initWithLocalTime:(unsigned long long)arg1 creationDate:(id)arg2 basisValueString:(id)arg3 basisUint64Value:(unsigned long long)arg4 basisDoubleValue:(double)arg5 risingEdge:(_Bool)arg6 fallingEdge:(_Bool)arg7 duration:(double)arg8 attributeId:(unsigned long long)arg9 type:(long long)arg10;

@end

