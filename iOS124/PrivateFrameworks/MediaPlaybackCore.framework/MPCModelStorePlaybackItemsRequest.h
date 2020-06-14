//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelRequest.h>

#import <MediaPlaybackCore/MPCModelPlaybackRequestEnvironmentConsuming-Protocol.h>
#import <MediaPlaybackCore/MPCModelPlaybackRequesting-Protocol.h>
#import <MediaPlaybackCore/MPCModelRequestRTCReporting-Protocol.h>
#import <MediaPlaybackCore/MPCModelStorePreviousRequestStoring-Protocol.h>
#import <MediaPlaybackCore/MPModelRequestDetailedKeepLocalStatusRequesting-Protocol.h>

@class MPCPlaybackRequestEnvironment, MPModelResponse, MPSectionedCollection, NSArray, NSString;

@interface MPCModelStorePlaybackItemsRequest : MPModelRequest <MPCModelPlaybackRequesting, MPCModelPlaybackRequestEnvironmentConsuming, MPModelRequestDetailedKeepLocalStatusRequesting, MPCModelRequestRTCReporting, MPCModelStorePreviousRequestStoring>
{
    _Bool _shouldBatchResultsWithPlaceholderObjects;
    _Bool _wantsDetailedKeepLocalRequestableResponse;
    _Bool _allowLocalEquivalencies;
    MPCPlaybackRequestEnvironment *_playbackRequestEnvironment;
    MPModelResponse *_previousResponse;
    NSString *_clientIdentifier;
    MPSectionedCollection *_sectionedModelObjects;
    NSArray *_storeIDs;
    NSArray *_playbackPrioritizedIndexPaths;
}

+ (_Bool)supportsSecureCoding;
+ (void)MPC_consumeSiriAssetInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSArray *playbackPrioritizedIndexPaths; // @synthesize playbackPrioritizedIndexPaths=_playbackPrioritizedIndexPaths;
@property(copy, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
@property(copy, nonatomic) MPSectionedCollection *sectionedModelObjects; // @synthesize sectionedModelObjects=_sectionedModelObjects;
@property(copy, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) _Bool allowLocalEquivalencies; // @synthesize allowLocalEquivalencies=_allowLocalEquivalencies;
@property(nonatomic) _Bool wantsDetailedKeepLocalRequestableResponse; // @synthesize wantsDetailedKeepLocalRequestableResponse=_wantsDetailedKeepLocalRequestableResponse;
@property(nonatomic) _Bool shouldBatchResultsWithPlaceholderObjects; // @synthesize shouldBatchResultsWithPlaceholderObjects=_shouldBatchResultsWithPlaceholderObjects;
@property(retain, nonatomic) MPModelResponse *previousResponse; // @synthesize previousResponse=_previousResponse;
@property(copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment; // @synthesize playbackRequestEnvironment=_playbackRequestEnvironment;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
@property(readonly, copy, nonatomic) NSString *rtcReportingPlayQueueSourceIdentifier;
- (void)setAllowsPlaybackResponseBatching:(_Bool)arg1;
@property(readonly, nonatomic) MPSectionedCollection *playbackSourceModelObjects;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

