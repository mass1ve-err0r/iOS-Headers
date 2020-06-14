/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHASceneTaxonomyClientHandler : NSObject <PHAServiceOperationHandling, PLPhotoAnalysisVisionServiceTaxonomyProtocol>

+ (void)initialize;

- (void)handleOperation:(id)arg1;
- (void)localizedLabelForSceneIdentifier:(unsigned int)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)sceneNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (id)sceneTaxonomyHash;
- (void)searchResultNodesForSceneClassifications:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)searchResultNodesForSceneIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;

@end