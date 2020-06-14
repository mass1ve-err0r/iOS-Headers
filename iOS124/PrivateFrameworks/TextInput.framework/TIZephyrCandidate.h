//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInput/TIKeyboardCandidateSingle.h>

@class NSString, TIProactiveTrigger, _ICPredictedItem;

@interface TIZephyrCandidate : TIKeyboardCandidateSingle
{
    _Bool _isFromPhraseDictionary;
    _Bool _isFromTextChecker;
    _Bool _isSecureContentCandidate;
    unsigned int _usageTrackingMask;
    unsigned long long _wordOriginFeedbackID;
    TIProactiveTrigger *_proactiveTrigger;
    NSString *_responseKitCategory;
    NSString *_fromBundleId;
    unsigned long long _ageForConnectionsMetrics;
    _ICPredictedItem *_proactivePredictedItem;
    NSString *_label;
}

+ (int)type;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) _ICPredictedItem *proactivePredictedItem; // @synthesize proactivePredictedItem=_proactivePredictedItem;
@property(nonatomic) unsigned long long ageForConnectionsMetrics; // @synthesize ageForConnectionsMetrics=_ageForConnectionsMetrics;
@property(copy, nonatomic) NSString *fromBundleId; // @synthesize fromBundleId=_fromBundleId;
- (id)responseKitCategory;
- (id)proactiveTrigger;
- (_Bool)isSecureContentCandidate;
@property(nonatomic) _Bool isFromTextChecker; // @synthesize isFromTextChecker=_isFromTextChecker;
@property(nonatomic) _Bool isFromPhraseDictionary; // @synthesize isFromPhraseDictionary=_isFromPhraseDictionary;
- (unsigned int)usageTrackingMask;
- (void).cxx_destruct;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAutocorrection;
- (unsigned long long)wordOriginFeedbackID;
- (id)initWithCandidate:(id)arg1 responseKitCategory:(id)arg2;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned int)arg4 secureContentCandidate:(_Bool)arg5 proactiveTrigger:(id)arg6 proactivePredictedItem:(id)arg7;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned int)arg4 secureContentCandidate:(_Bool)arg5 proactiveTrigger:(id)arg6 proactivePredictedItem:(id)arg7 responseKitCategory:(id)arg8;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3 usageTrackingMask:(unsigned int)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 wordOriginFeedbackID:(unsigned long long)arg3;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;

@end

