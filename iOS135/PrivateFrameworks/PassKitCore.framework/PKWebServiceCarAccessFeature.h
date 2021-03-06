/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKWebServiceCarAccessFeature : PKWebServiceRegionFeature {
    bool  _allowSharing;
    bool  _allowSharingToWatch;
    NSArray * _supportedTerminals;
}

@property (nonatomic, readonly) bool allowSharing;
@property (nonatomic, readonly) bool allowSharingToWatch;
@property (nonatomic, readonly, copy) NSArray *supportedTerminals;

- (void).cxx_destruct;
- (bool)allowSharing;
- (bool)allowSharingToWatch;
- (id)initWithDictionary:(id)arg1 region:(id)arg2;
- (id)localizedNameForIssuerWithIdentifier:(id)arg1;
- (id)supportedTerminals;

@end
