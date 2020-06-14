//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/NSCoding-Protocol.h>

@class NSString;

@interface MSShare : NSObject <NSCoding>
{
    NSString *_personID;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_emailAddress;
    NSString *_UUID;
    int _sharingOurStream;
    int _sharingTheirStream;
}

+ (id)share;
@property(nonatomic) int sharingTheirStream; // @synthesize sharingTheirStream=_sharingTheirStream;
@property(nonatomic) int sharingOurStream; // @synthesize sharingOurStream=_sharingOurStream;
@property(retain, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (unsigned long long)hash;
@property(retain, nonatomic) NSString *fullName;
@property(nonatomic) int sharingTheirPhotostream;
@property(nonatomic) int sharingOurPhotostream;

@end

