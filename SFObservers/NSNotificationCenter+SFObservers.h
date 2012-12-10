//
//  Created by krzysztof.zablocki on 3/23/12.
//
//
//
#import <Foundation/Foundation.h>
#import "SFObservers.h"

@interface NSNotificationCenter (SFObservers)

- (void)sf_addObserver:(id)observer selector:(SEL)aSelector name:(NSString *)aName object:(id)anObject;
- (void)sf_removeObserver:(id)observer;
- (void)sf_removeObserver:(id)observer name:(NSString *)aName object:(id)anObject;

@end