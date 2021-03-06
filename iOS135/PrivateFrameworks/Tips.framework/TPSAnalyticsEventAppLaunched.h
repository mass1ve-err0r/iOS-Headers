/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSAnalyticsEventAppLaunched : TPSAnalyticsEvent {
    NSString * _collectionID;
    NSString * _contentID;
    bool  _landingPage;
    NSNumber * _launchNumber;
    NSString * _launchType;
    NSString * _userType;
}

@property (nonatomic, retain) NSString *collectionID;
@property (nonatomic, retain) NSString *contentID;
@property (nonatomic, readonly) bool landingPage;
@property (nonatomic, readonly) NSNumber *launchNumber;
@property (nonatomic, retain) NSString *launchType;
@property (nonatomic, readonly) NSString *userType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsEventRepresentation;
- (id)collectionID;
- (id)contentID;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentID:(id)arg1 collectionID:(id)arg2 launchType:(id)arg3;
- (bool)landingPage;
- (id)launchNumber;
- (id)launchType;
- (void)setCollectionID:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setLaunchType:(id)arg1;
- (id)userType;

@end
