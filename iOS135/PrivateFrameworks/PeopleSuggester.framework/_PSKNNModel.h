/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface _PSKNNModel : NSObject {
    unsigned long long  __PSKnnMessagesZkwTopNFilter;
    unsigned long long  __PSKnnModelRecencyMarginToPromoteShares;
    unsigned long long  __PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId;
    unsigned long long  __PSKnnModelRecencyMarginToRetainShares;
    unsigned long long  __PSKnnTopKShares;
    _PSContactResolver * _contactResolver;
    NSArray * _filterBundleIds;
    _CDInteractionStore * _interactionStore;
    unsigned long long  _k;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    _CDInteractionCache * _messageInteractionCache;
    _CDInteractionCache * _shareInteractionCache;
}

@property (nonatomic) unsigned long long _PSKnnMessagesZkwTopNFilter;
@property (nonatomic) unsigned long long _PSKnnModelRecencyMarginToPromoteShares;
@property (nonatomic) unsigned long long _PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId;
@property (nonatomic) unsigned long long _PSKnnModelRecencyMarginToRetainShares;
@property (nonatomic) unsigned long long _PSKnnTopKShares;
@property (nonatomic, readonly) _PSContactResolver *contactResolver;
@property (nonatomic, readonly) NSArray *filterBundleIds;
@property (nonatomic, readonly) _CDInteractionStore *interactionStore;
@property (nonatomic, readonly) unsigned long long k;
@property (nonatomic, readonly) <_DKKnowledgeQuerying> *knowledgeStore;
@property (nonatomic, retain) _CDInteractionCache *messageInteractionCache;
@property (nonatomic, retain) _CDInteractionCache *shareInteractionCache;

- (void).cxx_destruct;
- (unsigned long long)_PSKnnMessagesZkwTopNFilter;
- (unsigned long long)_PSKnnModelRecencyMarginToPromoteShares;
- (unsigned long long)_PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId;
- (unsigned long long)_PSKnnModelRecencyMarginToRetainShares;
- (unsigned long long)_PSKnnTopKShares;
- (id)candidatePropertyFromCandidates:(id)arg1;
- (id)contactResolver;
- (id)extractNearestNeighborLabelsForQueryResult:(id)arg1 andNeighbors:(id)arg2 frequencyOnly:(bool)arg3 rankerType:(long long)arg4 contactsOnly:(bool)arg5;
- (id)extractNearestNeighborsForMapsQueryResult:(id)arg1 andNeighbors:(id)arg2 frequencyOnly:(bool)arg3;
- (id)featureVectorFromPredictionDate:(id)arg1 bundleId:(id)arg2;
- (id)featuresFromInteractions:(id)arg1;
- (id)featuresFromInteractionsSplitRecipients:(id)arg1;
- (id)featuresFromMapsFeedbackEvents:(id)arg1;
- (id)filterBundleIds;
- (id)filterShareInteractions:(id)arg1 minimumOccurences:(unsigned long long)arg2;
- (id)filterSuggestionsFrom:(id)arg1 byFilteringOutSeedRecipients:(id)arg2;
- (unsigned long long)indexToInsertNeighbor:(id)arg1 array:(id)arg2;
- (id)indexesOfObjectsWithKey:(id)arg1 withValues:(id)arg2 inArray:(id)arg3;
- (id)initWithK:(unsigned long long)arg1 interactionStore:(id)arg2 filterByBundleIds:(id)arg3 knowledgeStore:(id)arg4 contactResolver:(id)arg5 messageInteractionCache:(id)arg6 shareInteractionCache:(id)arg7;
- (id)interactionLabelsForQueryResult:(id)arg1 queryPoint:(id)arg2 rankerType:(long long)arg3 frequencyOnly:(bool)arg4 contactsOnly:(bool)arg5;
- (id)interactionStore;
- (unsigned long long)k;
- (id)knowledgeStore;
- (id)mapsShareEtaDefaultKnnSuggestions:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (id)mergedSuggestionsFromShares:(id)arg1 andInteractions:(id)arg2;
- (id)messageInteractionCache;
- (id)neighborsFromTrainingData:(id)arg1 k:(unsigned long long)arg2 queryPoint:(id)arg3;
- (id)normalizedStringFromString:(id)arg1;
- (id)rankedAutocompleteSuggestionsWithPredictionContext:(id)arg1 candidates:(id)arg2;
- (id)rankedGlobalSuggestionsWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 contactsOnly:(bool)arg3 interactions:(id)arg4 contactIdsCurrentlyInStore:(id)arg5;
- (id)rankedLabelsFromInteractionsMaintainRecipientsArray:(id)arg1 andDistances:(id)arg2 freqOnly:(bool)arg3;
- (id)rankedLabelsFromInteractionsSingleRecipientArray:(id)arg1 andDistances:(id)arg2 freqOnly:(bool)arg3 contactsOnly:(bool)arg4;
- (id)rankedMapsShareEtaSuggestions:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (id)rankedMessagesAutocompleteSuggestionsWithPredictionContext:(id)arg1 bundleId:(id)arg2 candidates:(id)arg3;
- (id)rankedMessagesZkwSuggestionsWithPredictionContext:(id)arg1 bundleId:(id)arg2 maxSuggestions:(unsigned long long)arg3 frequencyOnly:(bool)arg4 interactions:(id)arg5;
- (id)rankedNameSuggestionsWithPredictionContext:(id)arg1 forName:(id)arg2;
- (id)rankedZkwSuggestionsWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2;
- (void)setMessageInteractionCache:(id)arg1;
- (void)setShareInteractionCache:(id)arg1;
- (void)set_PSKnnMessagesZkwTopNFilter:(unsigned long long)arg1;
- (void)set_PSKnnModelRecencyMarginToPromoteShares:(unsigned long long)arg1;
- (void)set_PSKnnModelRecencyMarginToPromoteSharesMatchingBundleId:(unsigned long long)arg1;
- (void)set_PSKnnModelRecencyMarginToRetainShares:(unsigned long long)arg1;
- (void)set_PSKnnTopKShares:(unsigned long long)arg1;
- (id)shareInteractionCache;
- (id)sliceStart:(unsigned long long)arg1 end:(unsigned long long)arg2 ofArray:(id)arg3;
- (id)splitShareLabels:(id)arg1 suggestionDate:(id)arg2 contextBundleId:(id)arg3;
- (long long)suggestionExists:(id)arg1 withValue:(id)arg2 inArray:(id)arg3;
- (id)suggestionProxiesWithPredictionContext:(id)arg1;
- (id)targetBundleIdsForFilterBundlesIds:(id)arg1;
- (void)updateModelProperities:(id)arg1;

@end