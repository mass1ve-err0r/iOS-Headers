/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface WFSetBrightnessIntent : INIntent <WFDecimalSettingIntent>

@property (nonatomic, readonly) Class settingsClientClass;
@property (nonatomic, retain) NSNumber *value;
@property (nonatomic, copy) NSNumber *value;

- (void)applyWithSettingsClient:(id)arg1 completionHandler:(id /* block */)arg2;
- (Class)settingsClientClass;

@end