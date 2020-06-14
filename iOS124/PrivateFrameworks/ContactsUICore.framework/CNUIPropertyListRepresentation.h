//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CNUIPropertyListRepresentation : NSObject
{
    NSDictionary *_propertyList;
    NSDictionary *_attachments;
}

+ (id)writePropertyList:(id)arg1 toURL:(id)arg2 dataProxy:(id)arg3 fileManager:(id)arg4;
+ (id)propertyListWithContentsOfPackageURL:(id)arg1 dataProxy:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *attachments; // @synthesize attachments=_attachments;
@property(readonly, copy, nonatomic) NSDictionary *propertyList; // @synthesize propertyList=_propertyList;
- (void).cxx_destruct;
- (id)attachmentWithToken:(id)arg1 extension:(id)arg2 category:(id)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithPropertyList:(id)arg1 attachments:(id)arg2;

@end

