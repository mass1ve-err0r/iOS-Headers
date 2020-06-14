/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPUnknownBeacon : NSObject <NSCopying, NSSecureCoding> {
    NSData * _advertisement;
    NSArray * _beaconLocations;
    SPHandle * _handle;
    NSUUID * _identifier;
    bool  _isIgnored;
}

@property (nonatomic, copy) NSData *advertisement;
@property (nonatomic, copy) NSArray *beaconLocations;
@property (nonatomic, copy) SPHandle *handle;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) bool isIgnored;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)advertisement;
- (id)beaconLocations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIgnored;
- (void)setAdvertisement:(id)arg1;
- (void)setBeaconLocations:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsIgnored:(bool)arg1;

@end