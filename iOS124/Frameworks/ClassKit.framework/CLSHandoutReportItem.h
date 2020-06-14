//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSReportItem.h>

#import <ClassKit/NSCopying-Protocol.h>
#import <ClassKit/NSSecureCoding-Protocol.h>

@class CLSActivityReport, NSArray, NSDate, NSString;

@interface CLSHandoutReportItem : CLSReportItem <NSSecureCoding, NSCopying>
{
    _Bool _completed;
    int _type;
    int _granularity;
    NSString *_studentID;
    NSString *_classID;
    NSString *_handoutID;
    NSString *_attachmentID;
    NSString *_reportID;
    NSDate *_startDate;
    NSDate *_endDate;
    CLSActivityReport *_primaryActivityReport;
    NSArray *_additionalActivityReports;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *additionalActivityReports; // @synthesize additionalActivityReports=_additionalActivityReports;
@property(copy, nonatomic) CLSActivityReport *primaryActivityReport; // @synthesize primaryActivityReport=_primaryActivityReport;
@property(nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSString *reportID; // @synthesize reportID=_reportID;
@property(copy, nonatomic) NSString *attachmentID; // @synthesize attachmentID=_attachmentID;
@property(copy, nonatomic) NSString *handoutID; // @synthesize handoutID=_handoutID;
@property(copy, nonatomic) NSString *classID; // @synthesize classID=_classID;
@property(copy, nonatomic) NSString *studentID; // @synthesize studentID=_studentID;
@property(nonatomic) int granularity; // @synthesize granularity=_granularity;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)description;
- (void)scalarMultiply:(double)arg1;
- (void)add:(id)arg1;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

