//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesUI/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString;

@interface ICEvernoteNote : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_content;
    NSDate *_created;
    NSDate *_updated;
    NSArray *_resources;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(retain, nonatomic) NSDate *updated; // @synthesize updated=_updated;
@property(retain, nonatomic) NSDate *created; // @synthesize created=_created;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

