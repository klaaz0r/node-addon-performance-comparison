const addon = require('bindings')('addon.node')
const chai = require('chai')
const expect = chai.expect

describe('Performance Tests', function() {
  it('via c++', function() {
    expect(addon.fibonacci(42)).to.equal(267914296)
  }).timeout(0)
})
