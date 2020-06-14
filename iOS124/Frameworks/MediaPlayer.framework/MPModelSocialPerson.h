//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelPerson.h>

@class NSString;

@interface MPModelSocialPerson : MPModelPerson
{
}

+ (id)kind;
+ (id)__artworkCatalogBlock_KEY;
+ (id)__pendingRequestsCount_KEY;
+ (id)__verified_KEY;
+ (id)__privatePerson_KEY;
+ (id)__biography_KEY;
+ (id)__handle_KEY;
+ (id)__uncensoredName_KEY;
+ (id)storeItemMetadataRequestItemIdentifierForIdentifiers:(id)arg1;
- (id)artworkCatalog;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType artworkCatalogBlock; // @dynamic artworkCatalogBlock;
@property(copy, nonatomic) NSString *biography; // @dynamic biography;
@property(copy, nonatomic) NSString *handle; // @dynamic handle;
@property(nonatomic) long long pendingRequestsCount; // @dynamic pendingRequestsCount;
@property(nonatomic, getter=isPrivate) _Bool privatePerson; // @dynamic privatePerson;
@property(copy, nonatomic) NSString *uncensoredName; // @dynamic uncensoredName;
@property(nonatomic, getter=isVerified) _Bool verified; // @dynamic verified;

@end

