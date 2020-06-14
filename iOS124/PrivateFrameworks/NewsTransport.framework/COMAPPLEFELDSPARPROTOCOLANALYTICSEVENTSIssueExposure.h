//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSChannelData, COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueData, COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueExposureData, NSMutableArray, NSString;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueExposure : PBCodable <NSCopying>
{
    double _agedPersonalizationScore;
    double _agedUserFeedbackScore;
    double _autoSubscribeCtr;
    double _computedGlobalScoreCoefficient;
    double _diversifiedPersonalizationScore;
    double _featureCtr;
    double _globalScore;
    double _paidNonpaidSubscriptionCtr;
    double _personalizationScore;
    double _subscribedChannelCtr;
    double _userFeedbackScore;
    COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSChannelData *_channelData;
    int _displayRank;
    NSMutableArray *_fractionalCohortMemberships;
    int _groupType;
    COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueData *_issueData;
    COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueExposureData *_issueExposureData;
    NSString *_language;
    NSString *_parentFeedId;
    int _parentFeedType;
    NSString *_sourceChannelId;
    NSString *_surfacedByChannelId;
    _Bool _adSupportedChannel;
    _Bool _isPaidSubscriberToSourceChannel;
    CDStruct_2a523a1a _has;
}

+ (Class)fractionalCohortMembershipType;
@property(retain, nonatomic) NSString *surfacedByChannelId; // @synthesize surfacedByChannelId=_surfacedByChannelId;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) double subscribedChannelCtr; // @synthesize subscribedChannelCtr=_subscribedChannelCtr;
@property(nonatomic) double diversifiedPersonalizationScore; // @synthesize diversifiedPersonalizationScore=_diversifiedPersonalizationScore;
@property(nonatomic) double agedPersonalizationScore; // @synthesize agedPersonalizationScore=_agedPersonalizationScore;
@property(nonatomic) double agedUserFeedbackScore; // @synthesize agedUserFeedbackScore=_agedUserFeedbackScore;
@property(nonatomic) double userFeedbackScore; // @synthesize userFeedbackScore=_userFeedbackScore;
@property(nonatomic) double globalScore; // @synthesize globalScore=_globalScore;
@property(nonatomic) double computedGlobalScoreCoefficient; // @synthesize computedGlobalScoreCoefficient=_computedGlobalScoreCoefficient;
@property(nonatomic) double autoSubscribeCtr; // @synthesize autoSubscribeCtr=_autoSubscribeCtr;
@property(nonatomic) double paidNonpaidSubscriptionCtr; // @synthesize paidNonpaidSubscriptionCtr=_paidNonpaidSubscriptionCtr;
@property(nonatomic) double featureCtr; // @synthesize featureCtr=_featureCtr;
@property(nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property(retain, nonatomic) NSMutableArray *fractionalCohortMemberships; // @synthesize fractionalCohortMemberships=_fractionalCohortMemberships;
@property(nonatomic) _Bool isPaidSubscriberToSourceChannel; // @synthesize isPaidSubscriberToSourceChannel=_isPaidSubscriberToSourceChannel;
@property(nonatomic) _Bool adSupportedChannel; // @synthesize adSupportedChannel=_adSupportedChannel;
@property(nonatomic) int displayRank; // @synthesize displayRank=_displayRank;
@property(retain, nonatomic) NSString *parentFeedId; // @synthesize parentFeedId=_parentFeedId;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSChannelData *channelData; // @synthesize channelData=_channelData;
@property(retain, nonatomic) COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueExposureData *issueExposureData; // @synthesize issueExposureData=_issueExposureData;
@property(retain, nonatomic) COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueData *issueData; // @synthesize issueData=_issueData;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSurfacedByChannelId;
@property(readonly, nonatomic) _Bool hasLanguage;
@property(nonatomic) _Bool hasSubscribedChannelCtr;
@property(nonatomic) _Bool hasDiversifiedPersonalizationScore;
@property(nonatomic) _Bool hasAgedPersonalizationScore;
@property(nonatomic) _Bool hasAgedUserFeedbackScore;
@property(nonatomic) _Bool hasUserFeedbackScore;
@property(nonatomic) _Bool hasGlobalScore;
@property(nonatomic) _Bool hasComputedGlobalScoreCoefficient;
@property(nonatomic) _Bool hasAutoSubscribeCtr;
@property(nonatomic) _Bool hasPaidNonpaidSubscriptionCtr;
@property(nonatomic) _Bool hasFeatureCtr;
@property(nonatomic) _Bool hasPersonalizationScore;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (unsigned long long)fractionalCohortMembershipsCount;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)clearFractionalCohortMemberships;
@property(nonatomic) _Bool hasIsPaidSubscriberToSourceChannel;
@property(nonatomic) _Bool hasAdSupportedChannel;
@property(nonatomic) _Bool hasDisplayRank;
@property(readonly, nonatomic) _Bool hasParentFeedId;
- (int)StringAsGroupType:(id)arg1;
- (id)groupTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasGroupType;
@property(nonatomic) int groupType; // @synthesize groupType=_groupType;
- (int)StringAsParentFeedType:(id)arg1;
- (id)parentFeedTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasParentFeedType;
@property(nonatomic) int parentFeedType; // @synthesize parentFeedType=_parentFeedType;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasChannelData;
@property(readonly, nonatomic) _Bool hasIssueExposureData;
@property(readonly, nonatomic) _Bool hasIssueData;

@end

