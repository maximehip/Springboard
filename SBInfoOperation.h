//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SBInfoOperation : NSObject
{
    id _operand;
    NSString *_label;
}

+ (id)operationWithOperand:(id)arg1 label:(id)arg2;
@property(readonly, nonatomic) id operand; // @synthesize operand=_operand;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithOperand:(id)arg1 label:(id)arg2;

@end

