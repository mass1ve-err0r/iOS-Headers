/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

@interface SGQuickResponsesInference : NSObject {
    SGQuickResponsesModel * _model;
    SGQuickResponsesPersonalization * _personalization;
    SGQuickResponsesRanking * _ranking;
    _PASRng * _rng;
    SGQuickResponsesStore * _store;
}

+ (id)_getMergedPrompt:(id)arg1 withParams:(id)arg2;
+ (id)languageForLocale:(id)arg1 withLanguageDetectionForMessage:(id)arg2;
+ (id)normalizeStringForDeduping:(id)arg1;
+ (id)quickResponsesForMessage:(id)arg1 maxResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 context:(id)arg4 time:(id)arg5 locale:(id)arg6 chunkPath:(id)arg7 plistPath:(id)arg8 espressoBinFilePath:(id)arg9 espressoShapeFilePath:(id)arg10 lexiconFilePath:(id)arg11;
+ (id)quickResponsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 language:(id)arg4;
+ (void)registerDisplayedQuickResponses:(id)arg1 plistPath:(id)arg2;
+ (void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(bool)arg3 isUsingQuickResponses:(bool)arg4 locale:(id)arg5 plistPath:(id)arg6;
+ (id)stringsForQuickResponses:(id)arg1;

- (void).cxx_destruct;
- (id)addCustomResponsesToCommonResponses:(id)arg1 language:(id)arg2 locale:(id)arg3 modelScores:(id)arg4 maxResponses:(unsigned long long)arg5 customResponsesParams:(id)arg6;
- (id)initWithLanguage:(id)arg1 chunkPath:(id)arg2 plistPath:(id)arg3 espressoBinFilePath:(id)arg4;
- (id)initWithModel:(id)arg1 ranking:(id)arg2 personalization:(id)arg3 rng:(id)arg4 store:(id)arg5;
- (id)quickResponsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 context:(id)arg4 time:(id)arg5 language:(id)arg6 locale:(id)arg7;
- (id)quickResponsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 context:(id)arg4 time:(id)arg5 language:(id)arg6 locale:(id)arg7 plistPath:(id)arg8;
- (id)quickResponsesFromReplyTextIds:(id)arg1 config:(id)arg2;
- (id)randomizedReplyTextIdsForSemanticClass:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3;
- (id)replyTextIdsForSemanticClass:(unsigned long long)arg1 responseCount:(unsigned long long)arg2 config:(id)arg3;
- (id)replyTextsFromSemanticClasses:(id)arg1 config:(id)arg2;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationHistory:(id)arg3 language:(id)arg4 locale:(id)arg5 plistPath:(id)arg6;

@end
