/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSolArticle : NSObject <NSCopying, NSSecureCoding> {
    bool  _accessible;
    NSString * _identifier;
    NSString * _publisherID;
    double  _score;
    NSSet * _whitelistedTopicIDs;
}

@property (nonatomic) bool accessible;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *publisherID;
@property (nonatomic) double score;
@property (nonatomic, retain) NSSet *whitelistedTopicIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)accessible;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(bool)arg4;
- (id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(bool)arg4 whitelistedTopicIDs:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)publisherID;
- (double)score;
- (void)setAccessible:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPublisherID:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setWhitelistedTopicIDs:(id)arg1;
- (id)whitelistedTopicIDs;

@end
