//
//  Plateau.h
//  Monopoly
//
//  Created by lin on 11/11/14.
//  Copyright (c) 2014 HES-SO. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Plateau.h"
#import "Case.h"

@interface Plateau : NSObject
-(Plateau*)init;
-(Case*)getCaseDepart;
@end
